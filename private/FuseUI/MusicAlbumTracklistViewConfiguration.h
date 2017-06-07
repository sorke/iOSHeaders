//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FuseUI/MusicProductTracklistTableViewConfiguration.h>

#import <FuseUI/ISURLBagObserver-Protocol.h>

@class NSString;
@protocol MusicEntityProviding;

@interface MusicAlbumTracklistViewConfiguration : MusicProductTracklistTableViewConfiguration <ISURLBagObserver>
{
    id <MusicEntityProviding> _originalEntityProvider;
    id <MusicEntityProviding> _entityProvider;
    unsigned long long _originalMinimumNumberOfEntitiesForSection;
    NSString *_groupingProperty;
    NSString *_wantsGroupingProperty;
}

- (id)entityProvider;
- (void).cxx_destruct;
- (void)_updateTracklistPopularityIndicatorVisibility;
- (void)_configureContentDescriptorsForSectioning:(_Bool)arg1;
- (void)_groupIfNecessary;
- (void)_entityProviderDidInvalidate;
- (void)_configureTracklistTableViewDescriptorWithTintInformation:(id)arg1;
- (id)_loadTracklistTableViewDescriptor;
- (void)bagDidChange:(id)arg1;
@property(copy, nonatomic) NSString *wantsGroupingProperty;
@property(copy, nonatomic) NSString *groupingProperty;
- (id)newSectionEntityValueContext;
- (void)dealloc;
- (id)initWithEntityProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
