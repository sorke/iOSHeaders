//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTRowAction.h"

@interface PTUIPushViewControllerRowAction : PTRowAction
{
    CDUnknownBlockType _viewControllerCreator;
}

+ (id)actionWithViewControllerCreator:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) CDUnknownBlockType viewControllerCreator; // @synthesize viewControllerCreator=_viewControllerCreator;
- (void).cxx_destruct;
- (CDUnknownBlockType)defaultHandler;
- (_Bool)deselectsRowOnSuccess;

@end

