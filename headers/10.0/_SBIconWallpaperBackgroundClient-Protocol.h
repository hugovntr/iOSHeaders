//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SBIconColorSettings;

@protocol _SBIconWallpaperBackgroundClient <NSObject>
- (_Bool)isBlurring;
- (void)setBlurring:(_Bool)arg1;
- (void)setWallpaperBackgroundRect:(struct CGRect)arg1 forContents:(struct CGImage *)arg2 withFallbackColor:(struct CGColor *)arg3;
- (_Bool)wantsBlur:(SBIconColorSettings *)arg1;
- (struct CGRect)wallpaperRelativeBounds;
@end
