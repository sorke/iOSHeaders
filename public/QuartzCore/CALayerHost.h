//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@interface CALayerHost : CALayer
{
}

+ (_Bool)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (_Bool)_hasRenderLayerSubclass;
@property _Bool preservesFlip;
@property _Bool rendersAsynchronously;
@property _Bool inheritsSecurity;
@property unsigned int contextId;
- (void)layerDidBecomeVisible:(_Bool)arg1;
- (_Bool)_renderLayerDefinesProperty:(unsigned int)arg1;
- (struct Layer *)_copyRenderLayer:(struct Transaction *)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int *)arg3;
- (void)didChangeValueForKey:(id)arg1;

@end

