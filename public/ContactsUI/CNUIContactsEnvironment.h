//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNContactChangesNotifier, CNContactStore, CNContactsEnvironment, CNUIAccountsFacade, CNUICoreRecentsManager, CNUIExternalComponentsFactory, CNUIFMFFacade, CNUIIDSAvailabilityProvider, CNUIMeContactMonitor, CNUISchedulerProvider, CNUIUserActivityManager, PRPersonaStore, _DECConsumer;

@interface CNUIContactsEnvironment : NSObject
{
    CNUIAccountsFacade *_accountsFacade;
    CNUIFMFFacade *_fmfFacade;
    _DECConsumer *_duetConsumer;
    PRPersonaStore *_personaStore;
    CNUISchedulerProvider *_defaultSchedulerProvider;
    CNContactStore *_contactStore;
    id <CNUIPlaceholderProviderFactory> _placeholderProviderFactory;
    CNUIMeContactMonitor *_meMonitor;
    id <CNUIPRLikenessResolver> _cachingLikenessResolver;
    id <CNUILikenessRendering> _cachingLikenessRenderer;
    id <CNUIUserActionDiscoveringEnvironment> _actionDiscoveringEnvironment;
    CNUIIDSAvailabilityProvider *_idsAvailabilityProvider;
    id <CNLSApplicationWorkspace> _applicationWorkspace;
    id <CNCapabilities> _capabilities;
    id <CNUIDefaultUserActionFetcher> _defaultUserActionFetcher;
    CNContactChangesNotifier *_contactChangesNotifier;
    CNUICoreRecentsManager *_recentsManager;
    CNUIExternalComponentsFactory *_componentsFactory;
    CNUIUserActivityManager *_activityManager;
    CNContactsEnvironment *_cnEnvironment;
}

+ (id)makeCurrentEnvironment;
+ (id)currentEnvironment;
@property(readonly, nonatomic) CNContactsEnvironment *cnEnvironment; // @synthesize cnEnvironment=_cnEnvironment;
@property(retain, nonatomic) CNUIUserActivityManager *activityManager; // @synthesize activityManager=_activityManager;
@property(retain, nonatomic) CNUIExternalComponentsFactory *componentsFactory; // @synthesize componentsFactory=_componentsFactory;
@property(retain, nonatomic) CNUICoreRecentsManager *recentsManager; // @synthesize recentsManager=_recentsManager;
@property(retain, nonatomic) CNContactChangesNotifier *contactChangesNotifier; // @synthesize contactChangesNotifier=_contactChangesNotifier;
@property(retain, nonatomic) id <CNUIDefaultUserActionFetcher> defaultUserActionFetcher; // @synthesize defaultUserActionFetcher=_defaultUserActionFetcher;
@property(retain, nonatomic) id <CNCapabilities> capabilities; // @synthesize capabilities=_capabilities;
@property(retain, nonatomic) id <CNLSApplicationWorkspace> applicationWorkspace; // @synthesize applicationWorkspace=_applicationWorkspace;
@property(retain, nonatomic) CNUIIDSAvailabilityProvider *idsAvailabilityProvider; // @synthesize idsAvailabilityProvider=_idsAvailabilityProvider;
@property(retain, nonatomic) id <CNUIUserActionDiscoveringEnvironment> actionDiscoveringEnvironment; // @synthesize actionDiscoveringEnvironment=_actionDiscoveringEnvironment;
@property(retain, nonatomic) id <CNUILikenessRendering> cachingLikenessRenderer; // @synthesize cachingLikenessRenderer=_cachingLikenessRenderer;
@property(retain, nonatomic) id <CNUIPRLikenessResolver> cachingLikenessResolver; // @synthesize cachingLikenessResolver=_cachingLikenessResolver;
@property(retain, nonatomic) CNUIMeContactMonitor *meMonitor; // @synthesize meMonitor=_meMonitor;
@property(retain, nonatomic) id <CNUIPlaceholderProviderFactory> placeholderProviderFactory; // @synthesize placeholderProviderFactory=_placeholderProviderFactory;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(retain, nonatomic) CNUISchedulerProvider *defaultSchedulerProvider; // @synthesize defaultSchedulerProvider=_defaultSchedulerProvider;
@property(retain, nonatomic) PRPersonaStore *personaStore; // @synthesize personaStore=_personaStore;
@property(retain, nonatomic) _DECConsumer *duetConsumer; // @synthesize duetConsumer=_duetConsumer;
@property(retain, nonatomic) CNUIFMFFacade *fmfFacade; // @synthesize fmfFacade=_fmfFacade;
@property(retain, nonatomic) CNUIAccountsFacade *accountsFacade; // @synthesize accountsFacade=_accountsFacade;
- (void).cxx_destruct;
- (id)nts_lazyActivityManager;
- (id)nts_lazyComponentsFactory;
- (id)nts_makeRecentsManager;
- (id)nts_lazyRecentsManager;
- (id)nts_makeContactChangesNotifier;
- (id)nts_lazyContactChangesNotifier;
- (id)nts_lazyDefaultUserActionFetcher;
- (id)nts_lazyCapabilities;
- (id)nts_lazyApplicationWorkspace;
- (id)nts_lazyIDSAvailabilityProvider;
- (id)nts_makeActionDiscoveringEnvironment;
- (id)nts_lazyActionDiscoveringEnvironment;
- (id)nts_lazyCachingLikenessRenderer;
- (id)nts_makeCachingLikenessResolver;
- (id)nts_lazyCachingLikenessResolver;
- (id)nts_lazyPlaceholderProviderFactory;
- (id)nts_lazyDefaultSchedulerProvider;
- (id)nts_lazyContactStore;
- (id)nts_lazyPersonaStore;
- (id)nts_lazyFMFFacade;
- (id)nts_lazyAccountsFacade;
- (id)initWithContactsEnvironment:(id)arg1;
- (id)init;

@end

