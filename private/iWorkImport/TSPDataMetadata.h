//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

@class TSUColor;

__attribute__((visibility("hidden")))
@interface TSPDataMetadata : TSPObject
{
    TSUColor *_fallbackColor;
}

@property(copy, nonatomic) TSUColor *fallbackColor; // @synthesize fallbackColor=_fallbackColor;
- (void).cxx_destruct;
- (void)saveToMessage:(struct DataMetadata *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromMessage:(const struct DataMetadata *)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (id)copyWithContext:(id)arg1;

@end
