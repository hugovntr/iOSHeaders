//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SBBannerContainerViewController, SBBannerContextView, SBBannerController;
@protocol SBBannerGestureHandlerDelegate;

@interface SBBannerGestureHandler : NSObject
{
    id <SBBannerGestureHandlerDelegate> _delegate;
    SBBannerContainerViewController *_bannerViewController;
    SBBannerController *_bannerController;
}

+ (id)pullDownHandlerWithBannerController:(id)arg1 bannerViewController:(id)arg2;
+ (id)notificationCenterHandlerWithBannerController:(id)arg1 bannerViewController:(id)arg2;
@property(readonly, nonatomic) __weak SBBannerController *bannerController; // @synthesize bannerController=_bannerController;
@property(readonly, nonatomic) SBBannerContainerViewController *bannerViewController; // @synthesize bannerViewController=_bannerViewController;
@property(nonatomic) __weak id <SBBannerGestureHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)invalidate;
@property(readonly, nonatomic) SBBannerContextView *bannerView;
- (_Bool)handleGestureType:(long long)arg1 state:(long long)arg2 location:(struct CGPoint)arg3 displacement:(double)arg4 velocity:(double)arg5;
- (id)initWithBannerController:(id)arg1 bannerViewController:(id)arg2;

@end
