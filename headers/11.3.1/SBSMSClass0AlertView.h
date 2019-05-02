//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAlertView.h"

@class CALayer, NSString, UIButton, UILabel, UIView, UIVisualEffectView;

@interface SBSMSClass0AlertView : SBAlertView
{
    UIView *_contentContainerView;
    UIVisualEffectView *_alertContainerView;
    UIVisualEffectView *_blurEffectContainerView;
    UIVisualEffectView *_darkBlurView;
    UILabel *_messageTextLabel;
    UILabel *_messageTitleLabel;
    UIButton *_dismissButton;
    UIButton *_learnMoreButton;
    CALayer *_lineLayer;
    NSString *_messageString;
    id <SBSMSClass0AlertDisplayDelegate> _delegate;
}

- (void).cxx_destruct;
- (id)alertContainerView;
- (void)alertDisplayWillBecomeVisible;
- (id)blurEffectContainerView;
- (id)contentContainerView;
- (id)darkBlurView;
@property(nonatomic) id <SBSMSClass0AlertDisplayDelegate> delegate; // @synthesize delegate=_delegate;
- (id)dismissButton;
- (void)dismissButtonClicked:(id)arg1;
- (void)layoutSubviews;
- (id)learnMoreButton;
- (void)learnMoreButtonClicked:(id)arg1;
@property(copy, nonatomic) NSString *messageString; // @synthesize messageString=_messageString;
- (id)messageTextLabel;
- (id)messageTitleLabel;

@end
