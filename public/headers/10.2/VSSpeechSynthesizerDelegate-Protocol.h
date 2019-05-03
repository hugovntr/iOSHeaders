//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString, VSInstrumentMetrics, VSSpeechRequest, VSSpeechSynthesizer;

@protocol VSSpeechSynthesizerDelegate <NSObject>

@optional
- (void)speechSynthesizer:(VSSpeechSynthesizer *)arg1 willSpeakRangeOfSpeechString:(struct _NSRange)arg2 forRequest:(VSSpeechRequest *)arg3;
- (void)speechSynthesizer:(VSSpeechSynthesizer *)arg1 didContinueSpeakingRequest:(VSSpeechRequest *)arg2;
- (void)speechSynthesizer:(VSSpeechSynthesizer *)arg1 didPauseSpeakingRequest:(VSSpeechRequest *)arg2;
- (void)speechSynthesizer:(VSSpeechSynthesizer *)arg1 didFinishSpeakingRequest:(VSSpeechRequest *)arg2 withInstrumentMetrics:(VSInstrumentMetrics *)arg3;
- (void)speechSynthesizer:(VSSpeechSynthesizer *)arg1 didFinishSpeakingRequest:(VSSpeechRequest *)arg2 successfully:(_Bool)arg3 phonemesSpoken:(NSString *)arg4 withError:(NSError *)arg5;
- (void)speechSynthesizer:(VSSpeechSynthesizer *)arg1 didFinishSpeakingRequest:(VSSpeechRequest *)arg2 successfully:(_Bool)arg3 withError:(NSError *)arg4;
- (void)speechSynthesizer:(VSSpeechSynthesizer *)arg1 didStartSpeakingRequest:(VSSpeechRequest *)arg2;
- (void)speechSynthesizer:(VSSpeechSynthesizer *)arg1 willSpeakRangeOfSpeechString:(struct _NSRange)arg2;
- (void)speechSynthesizerDidContinueSpeaking:(VSSpeechSynthesizer *)arg1;
- (void)speechSynthesizerDidPauseSpeaking:(VSSpeechSynthesizer *)arg1;
- (void)speechSynthesizer:(VSSpeechSynthesizer *)arg1 didFinishSpeaking:(_Bool)arg2 phonemesSpoken:(NSString *)arg3 withError:(NSError *)arg4;
- (void)speechSynthesizer:(VSSpeechSynthesizer *)arg1 didFinishSpeaking:(_Bool)arg2 withError:(NSError *)arg3;
- (void)speechSynthesizerDidStartSpeaking:(VSSpeechSynthesizer *)arg1;
@end
