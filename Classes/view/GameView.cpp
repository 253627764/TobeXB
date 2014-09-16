#include "GameView.h"

USING_NS_CC;

GameView* GameView::m_root = nullptr;

GameView::GameView()
{
    
}

GameView::~GameView()
{

}

GameView* GameView::create()
{
    if (! m_root)
    {
        m_root = new GameView();
        m_root->autorelease();
        m_root->initTouchListener();
    }
    return m_root;
}

void GameView::initTouchListener()
{
    auto listener = EventListenerTouchOneByOne::create();
    listener->onTouchBegan = CC_CALLBACK_2(GameView::onTouchBegan, this);
    listener->onTouchCancelled = CC_CALLBACK_2(GameView::onTouchCancelled, this);
    listener->onTouchEnded = CC_CALLBACK_2(GameView::onTouchEnded, this);
    listener->onTouchMoved = CC_CALLBACK_2(GameView::onTouchMoved, this);
    this->_eventDispatcher->addEventListenerWithSceneGraphPriority(listener, m_root);
}

bool GameView::onTouchBegan(cocos2d::Touch *touch, cocos2d::Event *event)
{
    CCLOG("GameView onTouchBegan IN");
    return true;
}

void GameView::onTouchCancelled(cocos2d::Touch *touch, cocos2d::Event *event)
{
    CCLOG("GameView onTouchCancelled IN");
}

void GameView::onTouchEnded(cocos2d::Touch *touch, cocos2d::Event *event)
{
    CCLOG("GameView onTouchEnded IN");
}

void GameView::onTouchMoved(cocos2d::Touch *touch, cocos2d::Event *event)
{
//    CCLOG("GameView onTouchMoved IN");
    auto cur = touch->getLocation();
    auto pre = touch->getPreviousLocation();
    CCLOG("cur x : %f, y : %f, pre x : %f, y : %f", cur.x, cur.y, pre.x, pre.y);
}