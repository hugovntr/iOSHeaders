/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "LSApplicationWorkspaceObserverProtocol.h"

@class NSSet, LSApplicationWorkspace, NSHashTable, NSMutableSet;

__attribute__((visibility("hidden")))
@interface SBLSApplicationWorkspaceObserver : XXUnknownSuperclass <LSApplicationWorkspaceObserverProtocol> {
	LSApplicationWorkspace* _appWorkspace;
	NSHashTable* _applicationObservers;
	NSHashTable* _placeholderObservers;
	NSMutableSet* _placeholderProxies;
}
@property(retain, nonatomic) NSSet* placeholderProxies;
@property(readonly, assign, nonatomic) LSApplicationWorkspace* workspace;
+(id)sharedInstance;
-(void)applicationInstallsDidPrioritize:(id)applicationInstalls;
-(void)applicationInstallsDidCancel:(id)applicationInstalls;
-(void)applicationInstallsDidResume:(id)applicationInstalls;
-(void)applicationInstallsDidPause:(id)applicationInstalls;
-(void)applicationInstallsArePrioritized:(id)prioritized arePaused:(id)paused;
-(void)networkUsageChanged:(BOOL)changed;
-(void)applicationInstallsDidUpdateIcon:(id)applicationInstalls;
-(void)applicationsDidUninstall:(id)applications;
-(void)applicationsDidInstall:(id)applications;
-(void)applicationInstallsDidChange:(id)applicationInstalls;
-(void)applicationInstallsDidStart:(id)applicationInstalls;
-(void)_removeObserver:(id)observer table:(id)table;
-(void)_addObserver:(id)observer table:(id)table;
-(void)removePlaceholderLifecycleObserver:(id)observer;
-(void)addPlaceholderLifecycleObserver:(id)observer;
-(void)removeApplicationLifecycleObserver:(id)observer;
-(void)addApplicationLifecycleObserver:(id)observer;
-(void)dealloc;
-(id)init;
@end
