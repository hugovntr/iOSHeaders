/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBWallpaperObserver.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface SBWallpaperEffectSnapshotCache : XXUnknownSuperclass <SBWallpaperObserver> {
	NSMutableSet* _mappedImageKeys;
}
+(id)sharedInstance;
-(void)wallpaperWillChangeForVariant:(int)wallpaper;
-(id)snapshotForKey:(id)key withGenerationBlockIfNecessary:(id)generationBlockIfNecessary;
-(void)dealloc;
-(id)init;
@end
