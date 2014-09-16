//
//  GameScene.cpp
//  ToBeXB
//
//  Created by xujh on 14-8-30.
//
//

#include "GameScene.h"
#include "GameView.h"

USING_NS_CC;
GameScene::GameScene()
{
    
}

GameScene::~GameScene()
{

}

GameScene* GameScene::createScene()
{
    auto scene = new GameScene();
    auto size = Director::getInstance()->getVisibleSize();
    auto origin = Director::getInstance()->getVisibleOrigin();
    auto bg = Sprite::create("bg.jpg");
    bg->setPosition(Vec2(size.width/2 + origin.x, size.height/2 + origin.y));
    scene->addChild(bg);

    return scene;
}
