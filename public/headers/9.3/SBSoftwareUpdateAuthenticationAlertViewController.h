/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:29 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBPasscodeEntryAlertViewController.h>
#import <SpringBoard/SBPasscodeEntryAlertViewDelegate.h>
#import <SpringBoard/SBUIPasscodeLockViewDelegate.h>

@protocol SBPasscodeEntryAlertViewControllerDelegate;
@class NSString, SUAutoInstallOperation, SUDownload, UIViewController, PSSoftwareUpdateTermsManager;

@interface SBSoftwareUpdateAuthenticationAlertViewController : SBPasscodeEntryAlertViewController <SBPasscodeEntryAlertViewDelegate, SBUIPasscodeLockViewDelegate> {

	/*^block*/id _completionBlock;
	NSString* _passcode;
	SUAutoInstallOperation* _installOperation;
	SUDownload* _download;
	unsigned long long _installType;
	UIViewController* _termsAndConditionsController;
	PSSoftwareUpdateTermsManager* _preferencesSUManager;
	BOOL _showingTermsAndConditions;
	BOOL _isN94;
	id<SBPasscodeEntryAlertViewControllerDelegate> _delegate;

}

@property (nonatomic,copy) id completion;                           //@synthesize completionBlock=_completionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)alertDisplayViewWithSize:(CGSize)arg1 ;
-(BOOL)suppressesBanners;
-(BOOL)suppressesNotificationCenter;
-(BOOL)suppressesControlCenter;
-(BOOL)suppressesSiri;
-(void)setVisible:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_sendDeactivationResponseFailureIfNecessary;
-(void)_dismissTermsAndConditionsIfNecessaryAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)_shouldShowPasscodeView;
-(void)_presentTermsAndConditionsWithCompletion:(/*^block*/id)arg1 ;
-(void)_configurePasscodeView:(id)arg1 ;
-(void)_dismissSelf:(BOOL)arg1 ;
-(void)_termsAgree;
-(void)_sendCompletionResponse:(BOOL)arg1 ;
-(BOOL)passcodeAlertViewShouldShowAutomaticallyWhenVisible:(id)arg1 ;
-(id)initWithDownload:(id)arg1 withInstallType:(unsigned long long)arg2 withInstallOperation:(id)arg3 ;
-(void)_authenticationCancelled;
-(void)_authenticationSuccess:(id)arg1 fromMesa:(BOOL)arg2 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)deactivate;
-(void)_termsDisagree;
@end
