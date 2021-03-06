//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ContactsUI/CNAvatarViewController.h>

#import "_CNAvatarViewDelegate.h"

@class CNContactStore, NSArray, NSString, PRPersonaStore, _CNAvatarView;

__attribute__((visibility("hidden")))
@interface CNAvatarViewController_NewAvatarView : CNAvatarViewController <_CNAvatarViewDelegate>
{
    _Bool _threeDTouchEnabled;
    _Bool _animated;
    NSArray *_contacts;
    CNContactStore *_contactStore;
    PRPersonaStore *_personaStore;
    id <CNUIPRLikenessResolver> _likenessResolver;
    _CNAvatarView *_avatarView;
    NSArray *_likenessProviders;
}

+ (_Bool)defaultThreeDTouchSupport;
@property(retain, nonatomic) NSArray *likenessProviders; // @synthesize likenessProviders=_likenessProviders;
@property(nonatomic) __weak _CNAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(nonatomic) _Bool animated; // @synthesize animated=_animated;
@property(readonly, nonatomic) id <CNUIPRLikenessResolver> likenessResolver; // @synthesize likenessResolver=_likenessResolver;
@property(nonatomic, getter=isThreeDTouchEnabled) _Bool threeDTouchEnabled; // @synthesize threeDTouchEnabled=_threeDTouchEnabled;
@property(readonly, nonatomic) PRPersonaStore *personaStore; // @synthesize personaStore=_personaStore;
@property(readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (id)contacts;
- (void).cxx_destruct;
- (void)setContacts:(id)arg1;
- (void)loadView;
- (id)initWithSettings:(id)arg1;
- (id)descriptorForRequiredKeys;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

