/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SBAssistantGuideDomainListDelegate.h"
#import "AFUIUtteranceViewDelegate.h"

@class SBAssistantGuideModel, SBAssistantGuideSectionListController, SBAssistantGuideDomainListController, SBAssistantTourGuideView;

@interface SBAssistantTourGuideController : XXUnknownSuperclass <AFUIUtteranceViewDelegate, SBAssistantGuideDomainListDelegate> {
	SBAssistantTourGuideView* _view;
	SBAssistantGuideDomainListController* _domainListController;
	SBAssistantGuideSectionListController* _sectionListController;
	SBAssistantGuideModel* _model;
}
+(float)_calculatePeekAmount;
+(float)peekAmount;
-(void)dealloc;
-(id)_view;
-(id)view;
-(BOOL)_wantsUnmodifiedHeight;
-(BOOL)_affectsMagicPocket;
-(float)peekAmount;
-(void)utteranceViewInfoButtonHit:(id)hit;
-(void)revealGuide;
-(void)setMode:(int)mode;
-(void)setUtteranceText:(id)text;
-(id)_model;
-(void)_backButtonHit:(id)hit;
-(void)assistantShowSectionsForDomainAtIndex:(unsigned)index;
@end
