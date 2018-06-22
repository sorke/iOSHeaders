//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SpotlightUI/SPUISearchModel.h>

@class SPClientSession;

@interface SPUISearchModelGeneral : SPUISearchModel
{
    SPClientSession *_session;
}

@property(retain) SPClientSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)clear;
- (void)updateWithQueryContext:(id)arg1;
- (void)deactivate;
- (void)activate;
- (void)updatesEnabled;
- (void)updatesDispabled;
- (_Bool)forceStableResults;
- (void)setForceStableResults:(_Bool)arg1;
- (_Bool)infinitePatience;
- (void)setInfinitePatience:(_Bool)arg1;
- (id)init;

@end

