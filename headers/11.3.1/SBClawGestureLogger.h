//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSMutableSet;

@interface SBClawGestureLogger : NSObject
{
    _Bool _didTriggerSOS;
    NSDate *_clawEventTimestamp;
    NSMutableSet *_activePressTypes;
    NSMutableSet *_participatingPressTypes;
}

- (void).cxx_destruct;
- (void)_publishLoggedData;
- (void)_resetLoggedData;
@property(retain, nonatomic) NSMutableSet *activePressTypes; // @synthesize activePressTypes=_activePressTypes;
@property(copy, nonatomic) NSDate *clawEventTimestamp; // @synthesize clawEventTimestamp=_clawEventTimestamp;
@property(nonatomic) _Bool didTriggerSOS; // @synthesize didTriggerSOS=_didTriggerSOS;
- (id)init;
- (void)noteGesturePressType:(long long)arg1 withPressPhase:(long long)arg2;
- (void)noteSOSTriggered;
@property(retain, nonatomic) NSMutableSet *participatingPressTypes; // @synthesize participatingPressTypes=_participatingPressTypes;

@end
