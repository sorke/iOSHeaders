//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HelpKit/HLPHelpItem.h>

@class NSArray;

@interface HLPHelpSectionItem : HLPHelpItem
{
    _Bool _open;
    NSArray *_children;
}

@property(copy, nonatomic) NSArray *children; // @synthesize children=_children;
@property(nonatomic, getter=isOpen) _Bool open; // @synthesize open=_open;
- (void).cxx_destruct;
- (id)debugDescription;

@end

