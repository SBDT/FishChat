//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PrtlBase.h"

@class NSString;

@interface GetPushSystemImagePrtl : PrtlBase
{
    NSString *m_url;
    unsigned int m_offset;
    unsigned int m_mode;
}

@property(nonatomic) unsigned int m_mode; // @synthesize m_mode;
@property(nonatomic) unsigned int m_offset; // @synthesize m_offset;
@property(retain, nonatomic) NSString *m_url; // @synthesize m_url;
- (void).cxx_destruct;
- (_Bool)HandleResp:(void *)arg1;
- (void)InitReq:(void *)arg1;
- (id)init;

@end

