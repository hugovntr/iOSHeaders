import Vue from 'vue';
import Vuex from 'vuex';
import * as _ from "lodash";
import axios, { AxiosResponse } from 'axios';

Vue.use(Vuex);

interface Header {
	version: string
	headers: any
}

export default new Vuex.Store({
	state: {
		headers: Array<Header>()
	},
	getters: {
		availableVersions: (state) => {
			let vArr:Array<string> = [];
			for (let i = 0; i < state.headers.length; i++) {
				vArr.push(state.headers[i].version);
			}
			return vArr;
		},

		headersForVersion: (state) => (version:string = '12.1.2') => {
			return (state.headers.find(v => v.version === version))
		}
	},
	mutations: {
		SET_HEADERS: (state, payload) => {
			state.headers = _.sortBy(payload, ['version']);
		}
	},
	actions: {
		async initStore({ commit }) {
			const res: AxiosResponse = await axios.get(`${process.env.VUE_APP_API_URL}headers/headers.json`)
			commit('SET_HEADERS', res.data)
		}
	},
});
