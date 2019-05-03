/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImage;
@protocol SBDarkeningImageViewDelegate;

__attribute__((visibility("hidden")))
@interface SBDarkeningImageView : XXUnknownSuperclass {
	UIImage* _baseImage;
	float _brightness;
	id<SBDarkeningImageViewDelegate> _delegate;
}
@property(assign, nonatomic) float brightness;
@property(assign, nonatomic) id<SBDarkeningImageViewDelegate> delegate;
-(id)description;
-(void)setImage:(id)image brightness:(float)brightness;
-(void)setImage:(id)image;
-(id)image;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
