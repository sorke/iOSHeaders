//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FrontBoardServices/FBSWorkspaceResponse.h>

@interface FBSUIApplicationLaunchResponse : FBSWorkspaceResponse
{
    _Bool _supportsTaskSuspension;
    _Bool _supportsTaskSuspensionOnLock;
}

@property(nonatomic) _Bool supportsTaskSuspensionOnLock; // @synthesize supportsTaskSuspensionOnLock=_supportsTaskSuspensionOnLock;
@property(nonatomic) _Bool supportsTaskSuspension; // @synthesize supportsTaskSuspension=_supportsTaskSuspension;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;

@end

