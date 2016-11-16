#include "WPILib.h"
#include "TestBed.h"

Robot::Robot() : driver(0), drive(1, 0, 2, 3, 0.75), flag(0, 1)
{
}

Robot::~Robot()
{
}


void Robot::RobotInit()
{

}

void Robot::AutonomousInit()
{

}

void Robot::AutonomousPeriodic()
{

}

void Robot::TeleopInit()
{

}

void Robot::TeleopPeriodic() {
	drive.remoteDrive(driver.GetRawAxis(xbox::axis::leftX),   // For strafing
	                  driver.GetRawAxis(xbox::axis::leftY),   // For strafing
					  driver.GetRawAxis(xbox::axis::rightX)); // For rotation
	flag.remoteFlag(driver.GetRawButton(xbox::btn::lb),
	                driver.GetRawButton(xbox::btn::rb));
}

void Robot::DisabledInit()
{

}

void Robot::DisabledPeriodic()
{

}

START_ROBOT_CLASS(Robot);
