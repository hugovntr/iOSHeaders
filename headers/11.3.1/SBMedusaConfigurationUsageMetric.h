//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBAnalyticsBackendEventHandling.h"

@class NSString, PETDistributionEventTracker, PETScalarEventTracker;

@interface SBMedusaConfigurationUsageMetric : NSObject <SBAnalyticsBackendEventHandling>
{
    long long _currentSpaceConfig;
    long long _currentFloatingConfig;
    _Bool _isPIPVideoActive;
    _Bool _isFloatingActive;
    double _floatingAppActivationTimestamp;
    double _pipVideoActivationTimestamp;
    PETScalarEventTracker *_medusaUsageTracker;
    PETDistributionEventTracker *_floatingAppSessionTimeTracker;
    PETDistributionEventTracker *_pipVideoSessionTimeTracker;
}

- (void).cxx_destruct;
- (_Bool)_floatingAppIsActiveForConfiguration:(long long)arg1;
- (void)_trackMedusaConfigChange;
- (_Bool)handleEvent:(unsigned long long)arg1 withContext:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
