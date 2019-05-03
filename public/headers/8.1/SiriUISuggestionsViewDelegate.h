/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol SiriUISuggestionsViewDelegate <NSObject>
@optional
-(void)suggestionsView:(id)view didHideVibrantView:(id)view2;
-(float)statusViewHeightForSuggestionsView:(id)suggestionsView;
-(float)statusBarHeightForSuggestionsView:(id)suggestionsView;
-(void)didShowSuggestionsForSuggestionsView:(id)suggestionsView;
-(id)nextSuggestionsForSuggestionsView:(id)suggestionsView maxSuggestions:(unsigned)suggestions;
-(void)getNextSuggestionsForSuggestionsView:(id)suggestionsView maxSuggestions:(unsigned)suggestions completion:(id)completion;
@end
