//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBWallpaperObserver.h"

@class NSString, SBWallpaperController;

@interface SBDashBoardLegibilityProvider : NSObject <SBWallpaperObserver>
{
    id <SBDashBoardLegibilityProviderDelegate> _delegate;
    SBWallpaperController *_wallpaperController;
}

@property(retain, nonatomic) SBWallpaperController *wallpaperController; // @synthesize wallpaperController=_wallpaperController;
@property(nonatomic) __weak id <SBDashBoardLegibilityProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_notifyDelegate;
- (id)_wallpaperLegibilitySettings;
- (void)wallpaperDidChangeForVariant:(long long)arg1;
- (void)wallpaperLegibilitySettingsDidChange:(id)arg1 forVariant:(long long)arg2;
- (id)currentLegibilitySettings;
- (id)initWithWallpaperController:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
