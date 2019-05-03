import axios, { AxiosInstance, AxiosResponse } from 'axios';
import fs from "fs";

const ax:AxiosInstance = axios.create({
    baseURL: 'http://localhost/iosheaders'
});

interface Headers {
    version: string,
    path: string
};

interface Data {
    version: string,
    headers: Object
};

const headersDir:string = './headers';

const headersList:Array<Headers> = [];

const bigData:Array<Data> = [];


async function getHeaders(head:Headers) {
    try {
        const res:AxiosResponse<JSON> = await ax.get(head.path);
        const arr:any = res.data;
        let data = arr[Object.keys(arr)[0]];
        return ({version: head.version, headers: data});
    }
    catch(e) {
        console.error(e);
    }
}


async function main() {
    const scanDir = fs.readdirSync('./headers');
    scanDir.forEach(el => {
        if (el.includes('.json')) {
            headersList.push({version: el.replace('.json', ''), path: `${headersDir}/${el}`});
        }
    });
    
    for (let index = 0; index < headersList.length; index++) {
        let header = <Data>await getHeaders(headersList[index]);
        bigData.push(header);
    }

    fs.writeFile(`${headersDir}/headers.json`, JSON.stringify(bigData), (err) => {
        if (err) throw (err);
        console.log('Successully fetched all the headers');
    });
}

main();
