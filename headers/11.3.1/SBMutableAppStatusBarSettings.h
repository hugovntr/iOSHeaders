//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAppStatusBarSettings.h"

@class NSNumber, _UILegibilitySettings;

@interface SBMutableAppStatusBarSettings : SBAppStatusBarSettings
{
}

- (void)applySettings:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
@property(retain, nonatomic) NSNumber *alpha; // @dynamic alpha;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @dynamic legibilitySettings;
@property(nonatomic) long long style; // @dynamic style;
@property(nonatomic) int styleOverridesToCancel; // @dynamic styleOverridesToCancel;

@end
