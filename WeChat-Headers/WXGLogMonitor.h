//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WXGLogMonitor : NSObject
{
    NSString *_lastDate;
}

+ (id)sharedMonitor;
@property(copy, nonatomic) NSString *lastDate; // @synthesize lastDate=_lastDate;
- (void).cxx_destruct;
- (void)monitorLogSize;

@end

