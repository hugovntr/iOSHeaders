/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, UIView, NSLayoutConstraint;

__attribute__((visibility("hidden")))
@interface SBSearchTableViewCell : XXUnknownSuperclass {
	NSLayoutConstraint* _clippingConstraint;
	BOOL _addedConstantsConstraints;
	NSArray* _variableConstraints;
	BOOL _aboveSelectedCell;
	UIView* _background;
	UIView* _clippingContainer;
	UIView* _separatorView;
	float _leftSeparatorMargin;
}
@property(assign) float leftSeparatorMargin;
@property(readonly, assign, nonatomic) float verticalImageMargin;
@property(readonly, assign, nonatomic) float rightMargin;
@property(readonly, assign, nonatomic) float leftMargin;
@property(readonly, assign, nonatomic) UIView* separatorView;
@property(readonly, assign, nonatomic) UIView* clippingContainer;
@property(readonly, assign, nonatomic) UIView* background;
@property(readonly, assign, nonatomic) NSArray* variableConstraints;
@property(readonly, assign, nonatomic) NSArray* constantConstraints;
@property(assign, nonatomic, getter=isAboveSelectedCell) BOOL aboveSelectedCell;
+(void)configureViewForDisplay:(id)display viewType:(int)type;
+(id)attributedString:(id)string withLineBreakMode:(int)lineBreakMode defaultParagraphStyle:(id)style;
+(id)attributedStringForImage:(id)image baselineOffset:(float)offset;
+(id)selectedTextColor;
+(id)textColor;
+(id)maskedSelectedBackgroundColor;
+(id)unmaskedSelectedBackgroundColor;
+(id)backgroundColor;
+(id)lineColor;
+(id)cellIdentifierForSection:(id)section result:(id)result;
+(id)tableViewCellClasses;
+(void)registerClass:(Class)aClass;
+(BOOL)supportsSection:(id)section result:(id)result;
+(BOOL)shouldDisplayImagesForDomain:(unsigned)domain;
+(void)initialize;
-(void)setHighlighted:(BOOL)highlighted animated:(BOOL)animated;
-(void)setSelected:(BOOL)selected animated:(BOOL)animated;
-(void)updateSelectedState;
-(void)prepareForReuse;
-(void)updateWithSection:(id)section result:(id)result traitCollection:(id)collection;
-(void)updateConstraints;
-(CGSize)_systemLayoutSizeFittingSize:(CGSize)size withHorizontalFittingPriority:(float)horizontalFittingPriority verticalFittingPriority:(float)priority;
-(void)clipToTopHeaderWithHeight:(float)height inTableView:(id)tableView;
-(void)setFrame:(CGRect)frame;
-(void)updateBottomLine;
-(BOOL)aboveSelectedCell;
-(void)dealloc;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end
