//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBSOSTriggerObserver;

@protocol SBSOSTriggerObserverDelegate <NSObject>
- (void)sosDidTrigger:(SBSOSTriggerObserver *)arg1 completion:(void (^)(_Bool))arg2;

@optional
- (void)sosTriggerDidBecomeInactive:(SBSOSTriggerObserver *)arg1;
- (void)sosTriggerDidBecomeActive:(SBSOSTriggerObserver *)arg1;
@end
