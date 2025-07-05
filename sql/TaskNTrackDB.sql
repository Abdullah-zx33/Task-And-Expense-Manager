-- Create the database
CREATE DATABASE TaskNTrackDB;
GO

-- Use the new database
USE TaskNTrackDB;
GO

-- Sessions Table
CREATE TABLE Sessions (
    Username NVARCHAR(100),
    SessionName NVARCHAR(100),
    Role NVARCHAR(100),        
    Budget FLOAT,
    PRIMARY KEY (Username, SessionName)
);
GO

-- Users Table (for login/registration)
CREATE TABLE Users (
    Username NVARCHAR(100) PRIMARY KEY,
    Password NVARCHAR(100),
    SecurityAnswer NVARCHAR(200)
);
GO

-- Expenses Table
CREATE TABLE Expenses (
    Username NVARCHAR(100),
    SessionName NVARCHAR(100),
    Category NVARCHAR(100),
    Item NVARCHAR(100),
    Amount FLOAT,
    Note NVARCHAR(MAX),
    DateSpent DATE,
    FOREIGN KEY (Username, SessionName) REFERENCES Sessions(Username, SessionName)
);
GO

-- Tasks Table
CREATE TABLE Tasks (
    Username NVARCHAR(100),
    SessionName NVARCHAR(100),
    Title NVARCHAR(200),
    Description NVARCHAR(MAX),
    DueDate DATE,
    IsCompleted BIT,
    FOREIGN KEY (Username, SessionName) REFERENCES Sessions(Username, SessionName)
);
GO
