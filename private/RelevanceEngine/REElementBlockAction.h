//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <RelevanceEngine/REElementAction.h>

@interface REElementBlockAction : REElementAction
{
    CDUnknownBlockType _action;
}

@property(readonly, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_performWithContext:(id)arg1;
- (id)initWithAction:(CDUnknownBlockType)arg1;

@end

