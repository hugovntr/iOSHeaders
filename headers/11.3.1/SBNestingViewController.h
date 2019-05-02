//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SBNestingViewControllerDelegate.h"
#import "SBViewControllerTransitionContextDelegate.h"

@class NSArray, NSHashTable, NSString, SBViewControllerTransitionContext;

@interface SBNestingViewController : UIViewController <SBViewControllerTransitionContextDelegate, SBNestingViewControllerDelegate>
{
    id <SBNestingViewControllerDelegate> _delegate;
    SBNestingViewController *_parentNestingViewController;
    SBNestingViewController *_nestedViewController;
    long long _currentTransitionOperation;
    SBViewControllerTransitionContext *_currentTransition;
    CDUnknownBlockType _clientOperationCompletion;
    NSHashTable *_transitionObservers;
}

- (void).cxx_destruct;
- (id)_descriptionForOperation:(long long)arg1;
- (void)_handleAddChildViewController:(id)arg1;
- (void)_handleRemoveChildViewController:(id)arg1;
- (void)_handleWillAddChildViewController:(id)arg1;
- (void)_handleWillRemoveChildViewController:(id)arg1;
- (void)_performOperation:(long long)arg1 onViewController:(id)arg2 animated:(_Bool)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)_setFinalStateForTransitioningViewController:(id)arg1;
- (_Bool)_shouldAddTransitioningViewControllerAfterCurrentTransitionCompletes;
- (void)_updateStateForTransitioningViewController:(id)arg1;
- (void)addNestedViewController:(id)arg1;
- (void)addTransitionObserver:(id)arg1;
- (void)addViewToHierarchyForNestedViewController:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType clientOperationCompletion; // @synthesize clientOperationCompletion=_clientOperationCompletion;
@property(retain, nonatomic) SBViewControllerTransitionContext *currentTransition; // @synthesize currentTransition=_currentTransition;
@property(nonatomic) long long currentTransitionOperation; // @synthesize currentTransitionOperation=_currentTransitionOperation;
- (void)dealloc;
@property(readonly, nonatomic) SBNestingViewController *deepestNestedDescendantViewController;
@property(nonatomic) __weak id <SBNestingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGRect)frameForNestedViewController:(id)arg1 afterOperation:(long long)arg2 withParentContainerSize:(struct CGSize)arg3;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(readonly, nonatomic) _Bool isTransitioning;
@property(retain, nonatomic) SBNestingViewController *nestedViewController; // @synthesize nestedViewController=_nestedViewController;
@property(readonly, copy, nonatomic) NSArray *nestedViewControllers;
- (id)nestingViewController:(id)arg1 animationControllerForOperation:(long long)arg2 onViewController:(id)arg3 animated:(_Bool)arg4;
- (id)nestingViewController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (void)nestingViewController:(id)arg1 willPerformOperation:(long long)arg2 onViewController:(id)arg3 withTransitionCoordinator:(id)arg4;
@property(nonatomic) __weak SBNestingViewController *parentNestingViewController; // @synthesize parentNestingViewController=_parentNestingViewController;
- (void)popNestedViewControllerAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)pushNestedViewController:(id)arg1 animated:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)removeNestedViewController:(id)arg1;
- (void)removeTransitionObserver:(id)arg1;
- (void)removeViewFromHierarchyForNestedViewController:(id)arg1;
- (void)setNestedViewControllers:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSHashTable *transitionObservers; // @synthesize transitionObservers=_transitionObservers;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (id)transitionCoordinator;
- (void)transitionDidFinish:(id)arg1;
- (void)transitionDidReverse:(id)arg1;
- (void)transitionWillFinish:(id)arg1;
- (void)transitionWillReverse:(id)arg1;
- (void)traverseNestedViewControllersWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) SBNestingViewController *viewControllerCurrentlyDrivingTransition;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 forOperation:(long long)arg2 withTransitionCoordinator:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
