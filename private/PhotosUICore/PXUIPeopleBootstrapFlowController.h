//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXPeopleBootstrapFlowController.h>

@class PHPerson;

@interface PXUIPeopleBootstrapFlowController : PXPeopleBootstrapFlowController
{
}

- (void)_mergePerson:(id)arg1 toPerson:(id)arg2;
- (void)_namePerson:(id)arg1 toContact:(id)arg2 withChangeRequest:(id)arg3;
- (void)_namePerson:(id)arg1 toString:(id)arg2 withChangeRequest:(id)arg3;
- (void)_namePerson:(id)arg1 withChangeRequest:(id)arg2;
- (void)_removeFromPeopleAlbumWithChangeRequest:(id)arg1;
- (void)_addToPeopleAlbumWithChangeRequest:(id)arg1;
- (void)_unfavoritePersonWithChangeRequest:(id)arg1;
- (void)_favoritePersonWithChangeRequest:(id)arg1;
@property(readonly, nonatomic) PHPerson *sourcePerson;
- (void)done:(id)arg1;
- (id)viewControllersForBootstrapFlow;

@end
