USE TVMS;
GO

IF EXISTS (SELECT * FROM sys.tables WHERE name = 'Reports') DROP TABLE Reports;
IF EXISTS (SELECT * FROM sys.tables WHERE name = 'Violations') DROP TABLE Violations;
IF EXISTS (SELECT * FROM sys.tables WHERE name = 'Users') DROP TABLE Users;
GO

-- Users Table
CREATE TABLE Users (
    id INT IDENTITY(1,1) PRIMARY KEY,
    username NVARCHAR(100) UNIQUE NOT NULL,
    password NVARCHAR(255) NOT NULL,
    role NVARCHAR(20) NOT NULL DEFAULT 'user' 
);
GO

-- Violations Table 
CREATE TABLE Violations (
    violation_id INT IDENTITY(1,1) PRIMARY KEY,
    user_id INT NOT NULL,
    plate NVARCHAR(20) NOT NULL,
    type NVARCHAR(100) NOT NULL,
    location NVARCHAR(255),
    fine DECIMAL(10,2) DEFAULT 0.00,
    status NVARCHAR(20) DEFAULT 'Pending',  -- Pending, Paid, Cancelled
    CONSTRAINT FK_Violations_Users FOREIGN KEY (user_id) REFERENCES Users(id)
);
GO


CREATE TABLE Reports (
    report_id INT IDENTITY(1,1) PRIMARY KEY,
    user_id INT NOT NULL,
    violation_id INT NULL,                    
    plate NVARCHAR(20) NOT NULL,
    type NVARCHAR(100) NOT NULL,
    location NVARCHAR(255),
    message NVARCHAR(1000),
    status NVARCHAR(20) DEFAULT 'Pending',    
    rejection_reason NVARCHAR(500) NULL,
    submitted_at DATETIME2 DEFAULT GETDATE(),
    reviewed_at DATETIME2 NULL,
    CONSTRAINT FK_Reports_Users FOREIGN KEY (user_id) REFERENCES Users(id),
    CONSTRAINT FK_Reports_Violations FOREIGN KEY (violation_id) REFERENCES Violations(violation_id)
);
GO

ALTER TABLE Users ADD password_salt VARCHAR(64) NULL;
ALTER TABLE Users ADD created_at DATETIME DEFAULT GETDATE();

--Data
INSERT INTO Users (username, password, role) VALUES
('user@qq.com', '12345', 'user'),
('admin@qq.com', '12345', 'police');
GO

INSERT INTO Violations (user_id, plate, type, location, fine, status) VALUES
(1, 'ABC-123', 'Speeding', 'Highway 401', 250.00, 'Pending'),
(1, 'ABC-123', 'Red Light', 'Downtown', 380.00, 'Pending'),
(1, 'XYZ-789', 'Parking', 'Mall', 80.00, 'Paid');
GO


INSERT INTO Reports (user_id, violation_id, plate, type, location, message, status) VALUES
(1, 1, 'ABC-123', 'Wrongly Issued', 'Highway 401', 'I was not speeding, here is dashcam proof', 'Pending');
GO