/****************************************************************************
Copyright (c) 2010 cocos2d-x.org

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/


#ifndef __COCOS2D_H__
#define __COCOS2D_H__

#include "Cocos2dTypes.h"

/*
//
// all cocos2d include files
//
#include "ccConfig.h"	// should be included first

#include "CCBlockSupport.h"
#include "CCAction.h"
#include "CCCamera.h"
#include "CCCameraAction.h"
#include "CCProtocols.h"
#include "CCNode.h"
#include "CCDirector.h"
#include "CCTouchDispatcher.h"
#include "CCTouchDelegateProtocol.h"
#include "CCInstantAction.h"
#include "CCIntervalAction.h"
#include "CCEaseAction.h"
#include "CCLabel.h"
#include "CCLayer.h"
#include "CCMenu.h"
#include "CCMenuItem.h"
#include "CCParticleSystem.h"
#include "CCPointParticleSystem.h"
#include "CCQuadParticleSystem.h"
#include "CCParticleExamples.h"
#include "CCDrawingPrimitives.h"
#include "CCScene.h"
#include "CCScheduler.h"
#include "CCSprite.h"
#include "CCSpriteFrame.h"
#include "CCSpriteSheet.h"
#include "CCSpriteFrameCache.h"
#include "CCTextureCache.h"
#include "CCTransition.h"
#include "CCTextureAtlas.h"
#include "CCLabelAtlas.h"
#include "CCAtlasNode.h"
#include "CCEaseAction.h"
#include "CCTiledGridAction.h"
#include "CCGrabber.h"
#include "CCGrid.h"
#include "CCGrid3DAction.h"
#include "CCGridAction.h"
#include "CCBitmapFontAtlas.h"
#include "CCParallaxNode.h"
#include "CCActionManager.h"
#include "CCTMXTiledMap.h"
#include "CCTMXLayer.h"
#include "CCTMXObjectGroup.h"
#include "CCTMXXMLParser.h"
#include "CCTileMapAtlas.h"
#include "CCRenderTexture.h"
#include "CCMotionStreak.h"
#include "CCPageTurn3DAction.h"
#include "CCPageTurnTransition.h"
#include "CCTexture2D.h"
#include "CCPVRTexture.h"
#include "CCTouchHandler.h"
#include "CCConfiguration.h"
#include "CCRadialTransition.h"
#include "CCProgressTimerActions.h"
#include "CCPropertyAction.h"

//
// cocos2d macros
//
#include "ccTypes.h"
#include "ccMacros.h"

//
// cocos2d helper files
//
#include "Support/OpenGL_Internal.h"
#include "Support/EAGLView.h"
#include "Support/CCFileUtils.h"
#include "Support/CGPointExtension.h"
#include "Support/ccCArray.h"
#include "Support/CCArray.h"

#if CC_ENABLE_PROFILERS
#include "Support/CCProfiling.h"
#endif // CC_ENABLE_PROFILERS
*/
#include <string>
std::string cocos2dVersion();

#endif // __COCOS2D_H__