//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVAssetResourceLoaderDelegate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface WebCoreSharedBufferResourceLoaderDelegate : NSObject <AVAssetResourceLoaderDelegate>
{
    // Error parsing type: ^{ImageDecoderAVFObjC=^^?{atomic<unsigned int>=AI}{String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}{String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}{RetainPtr<AVURLAsset>=^v}{RetainPtr<AVAssetTrack>=^v}{RetainPtr<WebCoreSharedBufferResourceLoaderDelegate>=^v}{RetainPtr<OpaqueVTImageRotationSession *>=^v}{RetainPtr<__CVPixelBufferPool *>=^v}{Ref<WebCore::WebCoreDecompressionSession, WTF::DumbPtrTraits<WebCore::WebCoreDecompressionSession> >=^{WebCoreDecompressionSession}}{SampleMap={DecodeOrderSampleMap={map<std::__1::pair<WTF::MediaTime, WTF::MediaTime>, WTF::RefPtr<WebCore::MediaSample, WTF::DumbPtrTraits<WebCore::MediaSample> >, std::__1::less<std::__1::pair<WTF::MediaTime, WTF::MediaTime> >, WTF::FastAllocator<std::__1::pair<const std::__1::pair<WTF::MediaTime, WTF::MediaTime>, WTF::RefPtr<WebCore::MediaSample, WTF::DumbPtrTraits<WebCore::MediaSample> > > > >={__tree<std::__1::__value_type<std::__1::pair<WTF::MediaTime, WTF::MediaTime>, WTF::RefPtr<WebCore::MediaSample, WTF::DumbPtrTraits<WebCore::MediaSample> > >, std::__1::__map_value_compare<std::__1::pair<WTF::MediaTime, WTF::MediaTime>, std::__1::__value_type<std::__1::pair<WTF::MediaTime, WTF::MediaTime>, WTF::RefPtr<WebCore::MediaSample, WTF::DumbPtrTraits<WebCore::MediaSample> > >, std::__1::less<std::__1::pair<WTF::MediaTime, WTF::MediaTime> >, true>, WTF::FastAllocator<std::__1::__value_type<std::__1::pair<WTF::MediaTime, WTF::MediaTime>, WTF::RefPtr<WebCore::MediaSample, WTF::DumbPtrTraits<WebCore::MediaSample> > > > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, WTF::FastAllocator<std::__1::__tree_node<std::__1::__value_type<std::__1::pair<WTF::MediaTime, WTF::MediaTime>, WTF::RefPtr<WebCore::MediaSample, WTF::DumbPtrTraits<WebCore::MediaSample> > >, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::pair<WTF::MediaTime, WTF::MediaTime>, std::__1::__value_type<std::__1::pair<WTF::MediaTime, WTF::MediaTime>, WTF::RefPtr<WebCore::MediaSample, WTF::DumbPtrTraits<WebCore::MediaSample> > >, std::__1::less<std::__1::pair<WTF::MediaTime, WTF::MediaTime> >, true> >=Q}}}{PresentationOrderSampleMap={map<WTF::MediaTime, WTF::RefPtr<WebCore::MediaSample, WTF::DumbPtrTraits<WebCore::MediaSample> >, std::__1::less<WTF::MediaTime>, WTF::FastAllocator<std::__1::pair<const WTF::MediaTime, WTF::RefPtr<WebCore::MediaSample, WTF::DumbPtrTraits<WebCore::MediaSample> > > > >={__tree<std::__1::__value_type<WTF::MediaTime, WTF::RefPtr<WebCore::MediaSample, WTF::DumbPtrTraits<WebCore::MediaSample> > >, std::__1::__map_value_compare<WTF::MediaTime, std::__1::__value_type<WTF::MediaTime, WTF::RefPtr<WebCore::MediaSample, WTF::DumbPtrTraits<WebCore::MediaSample> > >, std::__1::less<WTF::MediaTime>, true>, WTF::FastAllocator<std::__1::__value_type<WTF::MediaTime, WTF::RefPtr<WebCore::MediaSample, WTF::DumbPtrTraits<WebCore::MediaSample> > > > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, WTF::FastAllocator<std::__1::__tree_node<std::__1::__value_type<WTF::MediaTime, WTF::RefPtr<WebCore::MediaSample, WTF::DumbPtrTraits<WebCore::MediaSample> > >, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<WTF::MediaTime, std::__1::__value_type<WTF::MediaTime, WTF::RefPtr<WebCore::MediaSample, WTF::DumbPtrTraits<WebCore::MediaSample> > >, std::__1::less<WTF::MediaTime>, true> >=Q}}}}}Q}{__map_iterator<std::__1::__tree_iterator<std::__1::__value_type<std::__1::pair<WTF::MediaTime, WTF::MediaTime>, WTF::RefPtr<WebCore::MediaSample, WTF::DumbPtrTraits<WebCore::MediaSample> > >, std::__1::__tree_node<std::__1::__value_type<std::__1::pair<WTF::MediaTime, WTF::MediaTime>, WTF::RefPtr<WebCore::MediaSample, WTF::DumbPtrTraits<WebCore::MediaSample> > >, void *> *, long> >={__tree_iterator<std::__1::__value_type<std::__1::pair<WTF::MediaTime, WTF::MediaTime>, WTF::RefPtr<WebCore::MediaSample, WTF::DumbPtrTraits<WebCore::MediaSample> > >, std::__1::__tree_node<std::__1::__value_type<std::__1::pair<WTF::MediaTime, WTF::MediaTime>, WTF::RefPtr<WebCore::MediaSample, WTF::DumbPtrTraits<WebCore::MediaSample> > >, void *> *, long>=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}}}{Lock={Atomic<unsigned char>={atomic<unsigned char>=AC}}}B{optional<WebCore::IntSize>=B(constexpr_storage_t<WebCore::IntSize>=C{IntSize=ii})}{optional<WebCore::ImageDecoderAVFObjC::RotationProperties>=B(constexpr_storage_t<WebCore::ImageDecoderAVFObjC::RotationProperties>=C{RotationProperties=BBI})}}, name: _parent
    long long _expectedContentSize;
    struct RetainPtr<NSData> _data;
    _Bool _complete;
    struct Vector<WTF::RetainPtr<AVAssetResourceLoadingRequest>, 0, WTF::CrashOnOverflow, 16> _requests;
    // Error parsing type: {Lock="m_byte"{Atomic<unsigned char>="value"{atomic<unsigned char>="__a_"AC}}}, name: _dataLock
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)resourceLoader:(id)arg1 didCancelLoadingRequest:(id)arg2;
- (_Bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (void)fulfillRequest:(id)arg1;
- (void)fulfillPendingRequests;
- (void)enqueueRequest:(id)arg1;
- (_Bool)canFulfillRequest:(id)arg1;
- (void)updateData:(id)arg1 complete:(_Bool)arg2;
- (void)setExpectedContentSize:(long long)arg1;
-     // Error parsing type: @24@0:8^{ImageDecoderAVFObjC=^^?{atomic<unsigned int>=AI}{String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}{String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}{RetainPtr<AVURLAsset>=^v}{RetainPtr<AVAssetTrack>=^v}{RetainPtr<WebCoreSharedBufferResourceLoaderDelegate>=^v}{RetainPtr<OpaqueVTImageRotationSession *>=^v}{RetainPtr<__CVPixelBufferPool *>=^v}{Ref<WebCore::WebCoreDecompressionSession, WTF::DumbPtrTraits<WebCore::WebCoreDecompressionSession> >=^{WebCoreDecompressionSession}}{SampleMap={DecodeOrderSampleMap={map<std::__1::pair<WTF::MediaTime, WTF::MediaTime>, WTF::RefPtr<WebCore::MediaSample, WTF::DumbPtrTraits<WebCore::MediaSample> >, std::__1::less<std::__1::pair<WTF::MediaTime, WTF::MediaTime> >, WTF::FastAllocator<std::__1::pair<const std::__1::pair<WTF::MediaTime, WTF::MediaTime>, WTF::RefPtr<WebCore::MediaSample, WTF::DumbPtrTraits<WebCore::MediaSample> > > > >={__tree<std::__1::__value_type<std::__1::pair<WTF::MediaTime, WTF::MediaTime>, WTF::RefPtr<WebCore::MediaSample, WTF::DumbPtrTraits<WebCore::MediaSample> > >, std::__1::__map_value_compare<std::__1::pair<WTF::MediaTime, WTF::MediaTime>, std::__1::__value_type<std::__1::pair<WTF::MediaTime, WTF::MediaTime>, WTF::RefPtr<WebCore::MediaSample, WTF::DumbPtrTraits<WebCore::MediaSample> > >, std::__1::less<std::__1::pair<WTF::MediaTime, WTF::MediaTime> >, true>, WTF::FastAllocator<std::__1::__value_type<std::__1::pair<WTF::MediaTime, WTF::MediaTime>, WTF::RefPtr<WebCore::MediaSample, WTF::DumbPtrTraits<WebCore::MediaSample> > > > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, WTF::FastAllocator<std::__1::__tree_node<std::__1::__value_type<std::__1::pair<WTF::MediaTime, WTF::MediaTime>, WTF::RefPtr<WebCore::MediaSample, WTF::DumbPtrTraits<WebCore::MediaSample> > >, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::pair<WTF::MediaTime, WTF::MediaTime>, std::__1::__value_type<std::__1::pair<WTF::MediaTime, WTF::MediaTime>, WTF::RefPtr<WebCore::MediaSample, WTF::DumbPtrTraits<WebCore::MediaSample> > >, std::__1::less<std::__1::pair<WTF::MediaTime, WTF::MediaTime> >, true> >=Q}}}{PresentationOrderSampleMap={map<WTF::MediaTime, WTF::RefPtr<WebCore::MediaSample, WTF::DumbPtrTraits<WebCore::MediaSample> >, std::__1::less<WTF::MediaTime>, WTF::FastAllocator<std::__1::pair<const WTF::MediaTime, WTF::RefPtr<WebCore::MediaSample, WTF::DumbPtrTraits<WebCore::MediaSample> > > > >={__tree<std::__1::__value_type<WTF::MediaTime, WTF::RefPtr<WebCore::MediaSample, WTF::DumbPtrTraits<WebCore::MediaSample> > >, std::__1::__map_value_compare<WTF::MediaTime, std::__1::__value_type<WTF::MediaTime, WTF::RefPtr<WebCore::MediaSample, WTF::DumbPtrTraits<WebCore::MediaSample> > >, std::__1::less<WTF::MediaTime>, true>, WTF::FastAllocator<std::__1::__value_type<WTF::MediaTime, WTF::RefPtr<WebCore::MediaSample, WTF::DumbPtrTraits<WebCore::MediaSample> > > > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, WTF::FastAllocator<std::__1::__tree_node<std::__1::__value_type<WTF::MediaTime, WTF::RefPtr<WebCore::MediaSample, WTF::DumbPtrTraits<WebCore::MediaSample> > >, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<WTF::MediaTime, std::__1::__value_type<WTF::MediaTime, WTF::RefPtr<WebCore::MediaSample, WTF::DumbPtrTraits<WebCore::MediaSample> > >, std::__1::less<WTF::MediaTime>, true> >=Q}}}}}Q}{__map_iterator<std::__1::__tree_iterator<std::__1::__value_type<std::__1::pair<WTF::MediaTime, WTF::MediaTime>, WTF::RefPtr<WebCore::MediaSample, WTF::DumbPtrTraits<WebCore::MediaSample> > >, std::__1::__tree_node<std::__1::__value_type<std::__1::pair<WTF::MediaTime, WTF::MediaTime>, WTF::RefPtr<WebCore::MediaSample, WTF::DumbPtrTraits<WebCore::MediaSample> > >, void *> *, long> >={__tree_iterator<std::__1::__value_type<std::__1::pair<WTF::MediaTime, WTF::MediaTime>, WTF::RefPtr<WebCore::MediaSample, WTF::DumbPtrTraits<WebCore::MediaSample> > >, std::__1::__tree_node<std::__1::__value_type<std::__1::pair<WTF::MediaTime, WTF::MediaTime>, WTF::RefPtr<WebCore::MediaSample, WTF::DumbPtrTraits<WebCore::MediaSample> > >, void *> *, long>=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}}}{Lock={Atomic<unsigned char>={atomic<unsigned char>=AC}}}B{optional<WebCore::IntSize>=B(constexpr_storage_t<WebCore::IntSize>=C{IntSize=ii})}{optional<WebCore::ImageDecoderAVFObjC::RotationProperties>=B(constexpr_storage_t<WebCore::ImageDecoderAVFObjC::RotationProperties>=C{RotationProperties=BBI})}}16, name: initWithParent:

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

