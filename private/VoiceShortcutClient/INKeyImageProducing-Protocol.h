//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class INImage;

@protocol INKeyImageProducing <NSObject>
@property(readonly) INImage *_keyImage;
- (long long)_compareSubProducerOne:(id <INKeyImageProducing>)arg1 subProducerTwo:(id <INKeyImageProducing>)arg2;

@optional
- (_Bool)_isValidSubProducer:(id <INKeyImageProducing>)arg1;
@end

