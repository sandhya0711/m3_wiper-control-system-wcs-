# Test plan and output

# Test plan is created and verified

## HIGH LEVEL TEST PLAN / Integrated test plan

| Test ID | Description | Input | Expected output | Actual Output | 
| --- | --- | --- | --- | --- | 
| 01 | START | USER BUTTON PRESS ONCE  | Shall Start the car at ACC position | Shall start the car at ACC position  | 
| 02 | WIPER ON | USER BUTTON PRESS TWICE | Wiper will on |  Wiper will on | 
| 03 | WIPER SPEED WHEN ON | USER BUTTON PRESS THIRD TIME | Speed of wiper incerese  | Speed of wiper incerese |
| 04 | WIPER OFF | USER BUTTON PRESS FOURTH TIME | wiper will off | wiper will off |
| 05 |  STOP | USER BUTTON PRESS FIVTH TIME | Stop the car | Stop the car |
| 06 |  ENCRYPTION | 1 OR 2 0R 3 0R 4 | encrypted data for 1/2/3/4 | encrypted data for 1/2/3/4 |

## LOW LEVEL TEST PLAN
| Test ID (for LOCK)| Description | Input | Expected output | Actual Output | passed/not |
| --- | --- | --- | --- | --- | --- |
| 01 | Check for Start | USER BUTTON PRESS ONCE  | RED LED will be on | RED LED will be on | ✅ |
| 02 | Check for Wiper on | USER BUTTON PRESS TWICE  | Shall On 3 LED's as per ENCRYPTION | Shall OFF all LED's as per ENCRYPTION | ✅ |
| 03 | Check for Speed of wiper | USER BUTTON PRESS THREE TIMES | Shall ON LED's ONCE clockwise as per timers |  Shall ON LED's ONCE clockwise as per timers | ✅ |
| 04 | Check for Wiper off | USER BUTTON PRESS FOUR TIMES | Shall Off 3 LED's once anti-clockwise as per timers |  Shall off 3 LED's once anti-clockwise as per timers | ✅ |
| 015 | Check for Stop | USER BUTTON PRESS FIVTH TIME  | RED LED will be off | RED LED will be off | ✅ |
| 06 | Check for ENCRYPTION | 1/2/3/4  | 1244/1843/6789/5478 | 1244/1843/6789/5478 | ✅ |
