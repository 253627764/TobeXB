//
//  GameScene.h
//  ToBeXB
//
//  Created by xujh on 14-8-30.
//
//

#ifndef __ToBeXB__GameScene__
#define __ToBeXB__GameScene__

#include "cocos2d.h"

class GameScene : public cocos2d::Scene
{
public:
    static GameScene* createScene();
    virtual ~GameScene();
//    virtual bool onTouchBegan(cocos2d::Touch *touch, cocos2d::Event *unused_event);
private:
    GameScene();
};

#endif /* defined(__ToBeXB__GameScene__) */
