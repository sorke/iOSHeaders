//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface BSUIMappedImageCacheOptions : NSObject <NSCopying>
{
    id <BSPathProviding> _containerPathProvider;
}

+ (id)optionsWithContainerPathProvider:(id)arg1;
@property(retain, nonatomic) id <BSPathProviding> containerPathProvider; // @synthesize containerPathProvider=_containerPathProvider;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

