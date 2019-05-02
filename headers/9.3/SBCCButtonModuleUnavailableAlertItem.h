/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:33 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>

@class SBCCButtonModule;

@interface SBCCButtonModuleUnavailableAlertItem : SBAlertItem {

	SBCCButtonModule* _module;

}

@property (nonatomic,retain) SBCCButtonModule * module;              //@synthesize module=_module - In the implementation block
+(BOOL)presentAlertItemForButtonModule:(id)arg1 ;
-(SBCCButtonModule *)module;
-(void)setModule:(SBCCButtonModule *)arg1 ;
-(BOOL)dismissOnLock;
-(BOOL)allowMenuButtonDismissal;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(BOOL)shouldShowInLockScreen;
@end
