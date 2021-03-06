//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "FPUIActionExtensionViewControllerProtocol.h"

@class FPUIActionExtensionContext;

@interface FPUIActionExtensionViewController : UIViewController <FPUIActionExtensionViewControllerProtocol>
{
    unsigned long long _browserUserInterfaceStyle;
}

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
@property(readonly, nonatomic, getter=_browserUserInterfaceStyle) unsigned long long browserUserInterfaceStyle; // @synthesize browserUserInterfaceStyle=_browserUserInterfaceStyle;
- (void)_browserUserInterfaceStyleDidChange;
- (void)prepareForAuthentication;
- (void)prepareForError:(id)arg1;
- (void)prepareAuthenticationUsingURL:(id)arg1;
- (void)prepareForServerCreation;
- (void)prepareForActionWithIdentifier:(id)arg1 itemIdentifiers:(id)arg2;
- (void)_setBrowserUserInterfaceStyle:(unsigned long long)arg1;
- (void)_prepareForError:(id)arg1;
- (void)_configureWithDomainIdentifier:(id)arg1;
- (void)_prepareAuthenticationUsingURL:(id)arg1;
- (void)_prepareForServerCreation;
- (void)_prepareForActionWithIdentifier:(id)arg1 items:(id)arg2;
- (_Bool)_extensionImplementsSelector:(SEL)arg1;

// Remaining properties
@property(readonly, nonatomic) FPUIActionExtensionContext *extensionContext; // @dynamic extensionContext;

@end

