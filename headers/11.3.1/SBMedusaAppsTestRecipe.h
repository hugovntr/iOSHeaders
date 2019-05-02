//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBTestRecipe.h"

@class FBApplicationUpdateScenesTransaction, NSString;

@interface SBMedusaAppsTestRecipe : NSObject <SBTestRecipe>
{
    _Bool _activated;
    NSString *_leftTestBundleID;
    NSString *_rightTestBundleID;
    FBApplicationUpdateScenesTransaction *_currentTransaction;
}

+ (id)title;
- (void).cxx_destruct;
- (void)_toggle;
- (void)_updateAppsToBringUpFromPreferences;
@property(retain, nonatomic) FBApplicationUpdateScenesTransaction *currentTransaction; // @synthesize currentTransaction=_currentTransaction;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
