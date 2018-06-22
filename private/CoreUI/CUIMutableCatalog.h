//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreUI/CUICatalog.h>

@interface CUIMutableCatalog : CUICatalog
{
    unsigned int _checkRespondsTo:1;
    unsigned int _respondsToCheck:1;
}

- (void)removeImageNamed:(id)arg1 withDescription:(id)arg2;
- (void)insertCGImage:(struct CGImage *)arg1 withName:(id)arg2 andDescription:(id)arg3;
- (void)removeImageNamed:(id)arg1 scale:(double)arg2 idiom:(long long)arg3 subtype:(long long)arg4;
- (void)insertCGImage:(struct CGImage *)arg1 name:(id)arg2 scale:(double)arg3 idiom:(long long)arg4 subtype:(long long)arg5;
- (id)_baseImageKeyForName:(id)arg1;
- (id)_baseKeyForName:(id)arg1;
- (unsigned long long)_storageRefForRendition:(id)arg1 representsODRContent:(_Bool *)arg2;
- (void)dealloc;
- (id)initWithName:(id)arg1 fromBundle:(id)arg2 error:(id *)arg3;
- (id)init;
- (id)initWithName:(id)arg1;

@end

