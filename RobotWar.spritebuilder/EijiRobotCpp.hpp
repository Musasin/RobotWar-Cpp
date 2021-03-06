//
//  EijiRobotCpp.h
//  RobotWar
//
//  Created by Daniel Haaser on 7/6/15.
//  Copyright (c) 2015 MakeGamesWithUs. All rights reserved.
//

#ifndef __RobotWar__EijiRobotCpp__
#define __RobotWar__EijiRobotCpp__

#include "RobotCpp.h"

class EijiRobotCpp : public RobotCpp
{
public:
    EijiRobotCpp();
    void run() override;
    void gotHit() override;
    void bulletHitEnemy(RWVec enemyPosition);
    void scannedRobotAtPosition(RWVec position) override;
    void hitWallWithSideAndAngle(RobotWallHitSide::RobotWallHitSide side, float hitAngle) override;
 
protected:
    int hitWallCount;
    int scannedCount;
    void myTurn();
    void myMove(int movement);
    bool isNeedShoot(RWVec myVec, RWVec enemyVec);
    bool isNeedTurn(RWVec myVec, RWVec enemyVec);
    
    bool isAhead;
    
    enum Movement
    {
        LEFT,
        DOWN,
        RIGHT,
        UP,
        STOP
    }nowMovement;
};

#endif /* defined(__RobotWar__EijiRobotCpp__) */
