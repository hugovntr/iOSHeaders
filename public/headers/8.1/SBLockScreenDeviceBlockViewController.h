/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBLockOverlayViewController.h"

@class NSString, SBFDeviceBlockTimer;

__attribute__((visibility("hidden")))
@interface SBLockScreenDeviceBlockViewController : SBLockOverlayViewController {
	SBFDeviceBlockTimer* _blockTimer;
}
@property(retain, nonatomic) SBFDeviceBlockTimer* blockTimer;
@property(readonly, assign, nonatomic) NSString* slideToUnlockText;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)loadView;
-(void)dealloc;
@end
