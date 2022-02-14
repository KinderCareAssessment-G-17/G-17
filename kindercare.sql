-- phpMyAdmin SQL Dump
-- version 5.1.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Feb 14, 2022 at 02:49 PM
-- Server version: 10.4.22-MariaDB
-- PHP Version: 7.4.27

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `kindercare`
--

-- --------------------------------------------------------

--
-- Table structure for table `assignments`
--

CREATE TABLE `assignments` (
  `assignment_no` varchar(20) NOT NULL,
  `start_date` date NOT NULL,
  `end_date` date NOT NULL,
  `start_time` time(6) NOT NULL,
  `end_time` time(6) NOT NULL,
  `characters` varchar(10) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `assignments`
--

INSERT INTO `assignments` (`assignment_no`, `start_date`, `end_date`, `start_time`, `end_time`, `characters`) VALUES
('A002', '2022-02-08', '2022-02-10', '18:13:00.000000', '05:13:00.000000', 'OP'),
('A003', '2022-02-09', '2022-02-10', '16:35:00.000000', '17:35:00.000000', 'ABCDEVYZ'),
('A004', '2022-02-10', '2022-02-11', '11:00:00.000000', '00:00:00.000000', 'XZ'),
('A005', '2022-02-12', '2022-02-13', '00:20:00.000000', '13:20:00.000000', 'EHJX'),
('A006', '2022-02-12', '2022-02-13', '20:35:00.000000', '21:35:00.000000', 'EGIJKLMO');

-- --------------------------------------------------------

--
-- Table structure for table `pupildetails`
--

CREATE TABLE `pupildetails` (
  `firstName` varchar(20) NOT NULL,
  `lastName` varchar(20) NOT NULL,
  `UserCode` int(20) NOT NULL,
  `TelNo` int(20) NOT NULL,
  `ActivationStatus` varchar(20) NOT NULL,
  `requestactivation` varchar(20) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `pupildetails`
--

INSERT INTO `pupildetails` (`firstName`, `lastName`, `UserCode`, `TelNo`, `ActivationStatus`, `requestactivation`) VALUES
('Daniella', 'Caden', 1, 789342762, 'Activated', 'Handled'),
('dorcus', 'mulinga', 78, 772969093, 'Activated', NULL),
('Robert', 'Pierce', 299, 789234615, 'Activated', 'Handled'),
('Nicole', 'kawaako', 423, 783514385, 'Activated', 'Handled'),
('tom', 'waako', 657, 772602433, 'Deactivated', NULL),
('Remy', 'Nemeth', 662, 792617465, 'Deactivated', NULL),
('emily', 'atim', 786, 782668671, 'Activated', NULL),
('Jenna', 'Kalema', 789, 772277298, 'Activated', NULL),
('Kilman', 'Rojo', 999, 783635187, 'Activated', NULL),
('lizzie', 'kisembo', 3545, 781877559, 'Deactivated', NULL),
('Petra', 'Niwensima', 3546, 773162374, 'Deactivated', NULL),
('Mbappe', 'Kylian', 4657, 732574817, 'Deactivated', NULL),
('Allan', 'Duku', 5871, 2147483647, 'Deactivated', NULL),
('conrad', 'waako', 898989, 721463745, 'Activated', NULL);

-- --------------------------------------------------------

--
-- Table structure for table `submittedassignments`
--

CREATE TABLE `submittedassignments` (
  `assignment_no` varchar(20) NOT NULL,
  `UserCode` int(20) NOT NULL,
  `duration` time(6) NOT NULL,
  `score` int(5) NOT NULL,
  `comment` text DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `submittedassignments`
--

INSERT INTO `submittedassignments` (`assignment_no`, `UserCode`, `duration`, `score`, `comment`) VALUES
('A002', 1, '00:00:00.000000', 80, ''),
('A004', 1, '00:01:28.000000', 163, '');

-- --------------------------------------------------------

--
-- Table structure for table `teacher`
--

CREATE TABLE `teacher` (
  `first_name` varchar(20) NOT NULL,
  `last_name` varchar(20) NOT NULL,
  `teacher_ID` varchar(20) NOT NULL,
  `email` varchar(50) NOT NULL,
  `pass` varchar(20) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `teacher`
--

INSERT INTO `teacher` (`first_name`, `last_name`, `teacher_ID`, `email`, `pass`) VALUES
('Peter', 'Kyeyune', '2000TR11', 'peter.kyeyune@aol.com', '4b8373d016f277527198');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `assignments`
--
ALTER TABLE `assignments`
  ADD PRIMARY KEY (`assignment_no`);

--
-- Indexes for table `pupildetails`
--
ALTER TABLE `pupildetails`
  ADD PRIMARY KEY (`UserCode`);

--
-- Indexes for table `teacher`
--
ALTER TABLE `teacher`
  ADD PRIMARY KEY (`teacher_ID`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
