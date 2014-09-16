//
//  GameView.h
//  ToBeXB
//
//  Created by xujh on 14-9-14.
//
//

#ifndef __ToBeXB__GameView__
#define __ToBeXB__GameView__

#include "cocos2d.h"

class GameView : public cocos2d::Node
{
public:
    static GameView* create();
    virtual ~GameView();
    bool onTouchBegan(cocos2d::Touch* touch, cocos2d::Event* event);
    void onTouchCancelled(cocos2d::Touch* touch, cocos2d::Event* event);
    void onTouchEnded(cocos2d::Touch* touch, cocos2d::Event* event);
    void onTouchMoved(cocos2d::Touch* touch, cocos2d::Event* event);
private:
    GameView();
    void initTouchListener();
    
    static GameView* m_root;
};

#endif