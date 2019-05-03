//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBTestRecipe.h"

@class NSString, SBAlertItem;

@interface SBClientAlertItemTestRecipe : NSObject <SBTestRecipe>
{
    SBAlertItem *_item;
}

+ (id)title;
- (void).cxx_destruct;
- (id)_anySUDescriptor;
- (id)_chatCarrierSMSAlert;
- (id)_chatMMSDelayedDownloadAlert;
- (id)_chatMMSInformationMissingAlert;
- (id)_currentAssistantLanguage;
- (void)_dismissCurrentItem;
- (id)_mapsApp;
- (id)_mapsThermalAlert;
- (id)_nextAlertItemToTest;
- (id)_wifiBTSSPAlert;
- (id)_wifiDontAskAlert;
- (id)_wifiErrorAlert;
- (id)_wifiIsEnterpriseAlert;
- (id)_wifiPasswordAlert;
- (id)_wifiTrustAlert;
- (void)educationAlertWasDeactivated:(id)arg1;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
