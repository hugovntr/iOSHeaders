//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BSAction, FBScene, SBCarDisplaySceneManager, SBSceneLayoutViewController;

@protocol SBCarDisplaySceneManagerDelegate <NSObject>
- (_Bool)handleAction:(BSAction *)arg1 fromScene:(FBScene *)arg2 forCarDisplaySceneManager:(SBCarDisplaySceneManager *)arg3;
- (SBSceneLayoutViewController *)newLayoutControllerForCarDisplaySceneManager:(SBCarDisplaySceneManager *)arg1;
- (id <SBWindowLayoutStrategy>)sceneWindowLayoutStrategyForCarDisplaySceneManager:(SBCarDisplaySceneManager *)arg1;
@end
